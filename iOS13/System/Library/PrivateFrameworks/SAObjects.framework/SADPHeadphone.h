/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (assign,nonatomic) BOOL inOrOverEar; 
@property (nonatomic,copy) NSString * position; 
+(id)headphone;
+(id)headphoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)position;
-(void)setPosition:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)inOrOverEar;
-(void)setInOrOverEar:(BOOL)arg1 ;
@end

