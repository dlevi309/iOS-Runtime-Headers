/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKMarker.h>

@protocol CRKMarker;
@class NSString;

@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker> {

	id<CRKMarker> mFileMarker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL exists; 
+(id)fileURL;
-(id)init;
-(BOOL)deleteWithError:(id*)arg1 ;
-(BOOL)exists;
-(BOOL)createWithError:(id*)arg1 ;
@end

