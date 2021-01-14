/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceComparable>

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)email;
-(id)groupIdentifier;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)encodedClassName;
-(void)setPseudo:(NSNumber *)arg1 ;
-(NSNumber *)pseudo;
-(NSNumber *)favoriteFacetime;
-(void)setFavoriteFacetime:(NSNumber *)arg1 ;
-(NSNumber *)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

