/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@class NSMutableArray, NSData;

@interface NLParsecDataManager : NSObject {

	NSMutableArray* m_entries;

}

@property (nonatomic,readonly) NSData * serializableData; 
+(void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(unsigned short)maxNumberOfPOIsAllowed;
+(void)notifyStoredSerializedDataChanged;
+(BOOL)supportsDomain:(id)arg1 ;
-(id)getEntries;
-(void)insertEntry:(id)arg1 ;
-(NSData *)serializableData;
-(void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3 ;
-(void)dealloc;
@end

