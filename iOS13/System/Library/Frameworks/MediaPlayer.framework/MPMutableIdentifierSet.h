/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPMutableIdentifierSet <NSObject>
@property (nonatomic,copy) NSString * containerUniqueID; 
@property (nonatomic,copy) NSString * handoffCorrelationID; 
@property (nonatomic,copy) NSString * contentItemID; 
@property (nonatomic,copy) NSString * lyricsID; 
@property (assign,nonatomic) BOOL shouldExcludeFromShuffle; 
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder; 
@property (nonatomic,copy) NSString * vendorID; 
@required
-(BOOL)isPlaceholder;
-(void)setPlaceholder:(BOOL)arg1;
-(NSString *)vendorID;
-(void)setVendorID:(id)arg1;
-(NSString *)containerUniqueID;
-(void)setContentItemID:(id)arg1;
-(NSString *)contentItemID;
-(void)setLibraryIdentifiersWithDatabaseID:(id)arg1 block:(/*^block*/id)arg2;
-(void)setPersonalStoreIdentifiersWithPersonID:(id)arg1 block:(/*^block*/id)arg2;
-(void)setUniversalStoreIdentifiersWithBlock:(/*^block*/id)arg1;
-(void)setRadioIdentifiersWithBlock:(/*^block*/id)arg1;
-(void)setContainerUniqueID:(id)arg1;
-(NSString *)handoffCorrelationID;
-(void)setHandoffCorrelationID:(id)arg1;
-(NSString *)lyricsID;
-(void)setLyricsID:(id)arg1;
-(BOOL)shouldExcludeFromShuffle;
-(void)setShouldExcludeFromShuffle:(BOOL)arg1;

@end

