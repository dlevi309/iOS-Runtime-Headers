/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKMobileGestalt : NSObject

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) CGSize mainScreenSizeInPixels; 
@property (nonatomic,readonly) unsigned long long availableBytes; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
+(id)sharedGestalt;
-(NSString *)serialNumber;
-(NSString *)productVersion;
-(unsigned long long)availableBytes;
-(NSString *)buildVersion;
-(double)mainScreenScale;
-(id)answerForQuestion:(CFStringRef)arg1 ofClass:(Class)arg2 ;
-(id)answerForQuestion:(CFStringRef)arg1 ;
-(CGSize)mainScreenSizeInPixels;
@end

