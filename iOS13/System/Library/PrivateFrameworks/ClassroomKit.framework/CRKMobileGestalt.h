/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKMobileGestalt : NSObject

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) CGSize mainScreenSizeInPixels; 
@property (nonatomic,readonly) unsigned long long availableBytes; 
+(id)sharedGestalt;
-(NSString *)serialNumber;
-(unsigned long long)availableBytes;
-(double)mainScreenScale;
-(id)answerForQuestion:(CFStringRef)arg1 ofClass:(Class)arg2 ;
-(id)answerForQuestion:(CFStringRef)arg1 ;
-(CGSize)mainScreenSizeInPixels;
@end

