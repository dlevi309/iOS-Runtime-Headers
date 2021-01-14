/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entryPoint;
+(id)entryPointWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)latitude;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)longitude;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
@end

