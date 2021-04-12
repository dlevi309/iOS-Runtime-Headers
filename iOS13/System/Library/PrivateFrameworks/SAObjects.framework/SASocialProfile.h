/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)userName;
-(NSString *)url;
-(id)groupIdentifier;
-(NSString *)serviceType;
-(void)setUrl:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(id)encodedClassName;
@end

