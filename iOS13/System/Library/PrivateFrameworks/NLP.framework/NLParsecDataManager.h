/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@class NSMutableArray, NSData;

@interface NLParsecDataManager : NSObject {

	NSMutableArray* m_entries;

}

@property (nonatomic,readonly) NSData * serializableData; 
+(BOOL)supportsDomain:(id)arg1 ;
+(void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)notifyStoredSerializedDataChanged;
+(unsigned short)maxNumberOfPOIsAllowed;
-(void)dealloc;
-(void)insertEntry:(id)arg1 ;
-(void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3 ;
-(NSData *)serializableData;
-(id)getEntries;
@end

