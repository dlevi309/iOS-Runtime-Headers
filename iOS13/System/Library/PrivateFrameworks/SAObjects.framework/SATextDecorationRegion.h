/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSNumber * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDecorationRegion;
+(id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(NSNumber *)start;
-(id)groupIdentifier;
-(void)setStart:(NSNumber *)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)encodedClassName;
@end

