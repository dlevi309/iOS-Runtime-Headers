/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceComparable>

@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSNumber * favoriteVoice; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phone;
+(id)phoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)favoriteFacetime;
-(void)setFavoriteFacetime:(NSNumber *)arg1 ;
-(NSNumber *)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)pseudo;
-(void)setPseudo:(NSNumber *)arg1 ;
-(NSNumber *)favoriteVoice;
-(void)setFavoriteVoice:(NSNumber *)arg1 ;
@end

