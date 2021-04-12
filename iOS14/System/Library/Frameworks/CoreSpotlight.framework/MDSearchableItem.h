/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <CoreSpotlight/CSSearchableItem.h>

@class NSDictionary, NSString, NSURL, NSData;

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary * attributes; 
@property (copy) NSString * displayName; 
@property (copy) NSString * secondaryDisplayName; 
@property (copy) NSString * contentUTI; 
@property (copy) NSURL * contentURL; 
@property (copy) NSURL * thumbnailURL; 
@property (copy) NSData * thumbnailImageData; 
@property (copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(NSURL *)contentURL;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3 ;
-(NSString *)contentUTI;
-(NSString *)secondaryDisplayName;
-(void)setSecondaryDisplayName:(NSString *)arg1 ;
-(void)setContentUTI:(NSString *)arg1 ;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSDictionary *)attributes;
-(NSString *)localizedDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSData *)thumbnailImageData;
-(id)initWithCoder:(id)arg1 ;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

