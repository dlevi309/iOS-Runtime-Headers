/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL configuredForLeftWrist; 
@property (nonatomic,copy) NSString * interfaceOrientation; 
@property (assign,nonatomic) BOOL victoryDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchDataWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)watchData;
-(id)groupIdentifier;
-(BOOL)configuredForLeftWrist;
-(void)setConfiguredForLeftWrist:(BOOL)arg1 ;
-(BOOL)victoryDevice;
-(void)setVictoryDevice:(BOOL)arg1 ;
-(id)encodedClassName;
-(void)setInterfaceOrientation:(NSString *)arg1 ;
-(NSString *)interfaceOrientation;
@end

