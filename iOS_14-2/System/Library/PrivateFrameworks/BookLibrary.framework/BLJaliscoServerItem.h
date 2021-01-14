/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, BLJaliscoServerDatabase, NSDictionary;

@interface BLJaliscoServerItem : NSManagedObject

@property (nonatomic,retain) NSString * storeID; 
@property (nonatomic,retain) NSString * artist; 
@property (nonatomic,retain) NSString * artworkTokenCode; 
@property (nonatomic,retain) NSString * artworkURLString; 
@property (nonatomic,retain) NSString * cloudID; 
@property (nonatomic,retain) NSString * genre; 
@property (nonatomic,retain) NSNumber * isHidden; 
@property (nonatomic,retain) NSDate * purchasedAt; 
@property (nonatomic,retain) NSString * purchasedTokenCode; 
@property (nonatomic,retain) NSNumber * purchaseHistoryID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (nonatomic,retain) NSNumber * isDisabled; 
@property (nonatomic,retain) NSDate * expectedDate; 
@property (nonatomic,retain) NSString * sortedTitle; 
@property (nonatomic,retain) NSString * sortedAuthor; 
@property (nonatomic,retain) NSNumber * pageProgressionDirection; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSString * displayVersion; 
@property (nonatomic,retain) NSString * storeDownloadParameters; 
@property (nonatomic,retain) BLJaliscoServerDatabase * database; 
@property (nonatomic,retain) NSString * fileExtension; 
@property (nonatomic,retain) NSNumber * isPictureBook; 
@property (nonatomic,retain) NSNumber * containsAudio; 
@property (nonatomic,retain) NSNumber * isReadAloud; 
@property (nonatomic,retain) NSNumber * isAudiobook; 
@property (nonatomic,retain) NSString * chapterMetadataURLString; 
@property (nonatomic,retain) NSString * hlsPlaylistURLString; 
@property (nonatomic,retain) NSNumber * storeAccountID; 
@property (nonatomic,retain) NSDictionary * additionalAudiobookInfo; 
@property (nonatomic,retain) NSNumber * needsImport; 
-(id)initIntoManagedObjectContext:(id)arg1 ;
@end

