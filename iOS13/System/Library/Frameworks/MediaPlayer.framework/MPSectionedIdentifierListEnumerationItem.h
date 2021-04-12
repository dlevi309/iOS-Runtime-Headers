/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

