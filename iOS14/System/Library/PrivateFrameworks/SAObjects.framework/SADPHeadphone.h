/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (assign,nonatomic) BOOL inOrOverEar; 
@property (nonatomic,copy) NSString * position; 
+(id)headphone;
+(id)headphoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPosition:(NSString *)arg1 ;
-(BOOL)inOrOverEar;
-(void)setInOrOverEar:(BOOL)arg1 ;
@end

