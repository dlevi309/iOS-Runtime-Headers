/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPSectionedIdentifierListEnumerationItem <MPSectionedIdentifierListEnumerationResult>
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (getter=isRemoved,nonatomic,readonly) BOOL removed; 
@required
-(NSString *)itemIdentifier;
-(NSString *)sectionIdentifier;
-(BOOL)isRemoved;

@end

