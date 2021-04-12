/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKMarker.h>

@protocol CRKMarker;
@class NSString;

@interface CRKStudentKeepAliveFile : NSObject <CRKMarker> {

	id<CRKMarker> _fileMarker;

}

@property (nonatomic,readonly) id<CRKMarker> fileMarker;              //@synthesize fileMarker=_fileMarker - In the implementation block
@property (nonatomic,readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURL;
-(id)init;
-(BOOL)exists;
-(BOOL)deleteWithError:(id*)arg1 ;
-(BOOL)createWithError:(id*)arg1 ;
-(id<CRKMarker>)fileMarker;
@end

