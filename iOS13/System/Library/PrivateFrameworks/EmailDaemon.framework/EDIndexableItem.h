/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class NSString, NSDate, NSData;


@protocol EDIndexableItem <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime; 
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData; 
@property (nonatomic,readonly) BOOL hasCompleteData; 
@property (nonatomic,readonly) BOOL alwaysMarkAsIndexed; 
@property (nonatomic,readonly) BOOL shouldExcludeFromIndex; 
@property (nonatomic,readonly) BOOL requiresPreprocessing; 
@required
-(NSString *)domainIdentifier;
-(long long)compare:(id)arg1;
-(NSString *)identifier;
-(NSData *)underlyingData;
-(id)searchableItem;
-(NSDate *)dateReceived;
-(void)setIndexingType:(long long)arg1;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(long long)indexingType;
-(id)fetchIndexableAttachments;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(id)arg1;
-(BOOL)hasCompleteData;

@end

