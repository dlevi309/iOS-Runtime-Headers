/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long appRestriction; 
@property (nonatomic,copy) NSString * countryCode; 
@property (assign,nonatomic) long long movieRestriction; 
@property (assign,nonatomic) long long tvRestriction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)mediaContentRatingRestrictions;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)appRestriction;
-(void)setAppRestriction:(long long)arg1 ;
-(long long)movieRestriction;
-(void)setMovieRestriction:(long long)arg1 ;
-(long long)tvRestriction;
-(void)setTvRestriction:(long long)arg1 ;
@end

