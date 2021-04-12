/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)displayName;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)localizedDisplayName;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3 ;
-(NSString *)secondaryDisplayName;
-(void)setSecondaryDisplayName:(NSString *)arg1 ;
-(NSString *)contentUTI;
-(void)setContentUTI:(NSString *)arg1 ;
@end

