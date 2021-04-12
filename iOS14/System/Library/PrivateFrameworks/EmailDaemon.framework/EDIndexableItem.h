/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1;
-(NSString *)domainIdentifier;
-(void)setIndexingType:(long long)arg1;
-(BOOL)shouldExcludeFromIndex;
-(long long)indexingType;
-(void)setNeedsAllAttributesIndexingType;
-(id)fetchIndexableAttachments;
-(NSData *)underlyingData;
-(id)searchableItem;
-(void)preprocess;
-(NSString *)identifier;
-(NSDate *)dateReceived;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(id)arg1;
-(BOOL)hasCompleteData;

@end

