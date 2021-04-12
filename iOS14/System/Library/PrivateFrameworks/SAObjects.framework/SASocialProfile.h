/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * userName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)userName;
-(NSString *)url;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)serviceType;
@end

