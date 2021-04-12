/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKMarker.h>

@class NSURL, NSString;

@interface CRKFileBackedMarker : NSObject <CRKMarker> {

	NSURL* mFileURL;

}

@property (nonatomic,readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)exists;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(BOOL)createWithError:(id*)arg1 ;
@end

