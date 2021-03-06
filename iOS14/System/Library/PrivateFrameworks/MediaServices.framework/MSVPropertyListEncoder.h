/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSData, NSFileHandle, NSMutableData, NSDateFormatter, NSMutableArray, NSMutableString;

@interface MSVPropertyListEncoder : NSObject {

	NSData* _arrayOpeningTagData;
	NSData* _arrayClosingTagData;
	NSData* _dictionaryOpeningTagData;
	NSData* _dictionaryClosingTagData;
	NSData* _keyOpeningTagData;
	NSData* _keyClosingTagData;
	NSData* _stringOpeningTagData;
	NSData* _stringClosingTagData;
	NSData* _dataOpeningTagData;
	NSData* _dataClosingTagData;
	NSData* _boolTrueTagData;
	NSData* _boolFalseTagData;
	NSFileHandle* _outputFileHandle;
	NSMutableData* _outputBuffer;
	NSDateFormatter* _dateFormatter;
	NSMutableArray* _containerStack;
	NSMutableString* _tabPrefix;
	NSData* _tabPrefixData;

}

@property (nonatomic,retain) NSFileHandle * outputFileHandle;                  //@synthesize outputFileHandle=_outputFileHandle - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                     //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerStack;                  //@synthesize containerStack=_containerStack - In the implementation block
@property (nonatomic,retain) NSMutableString * tabPrefix;                      //@synthesize tabPrefix=_tabPrefix - In the implementation block
@property (nonatomic,retain) NSData * tabPrefixData;                           //@synthesize tabPrefixData=_tabPrefixData - In the implementation block
@property (nonatomic,readonly) NSData * arrayOpeningTagData;                   //@synthesize arrayOpeningTagData=_arrayOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * arrayClosingTagData;                   //@synthesize arrayClosingTagData=_arrayClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * dictionaryOpeningTagData;              //@synthesize dictionaryOpeningTagData=_dictionaryOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * dictionaryClosingTagData;              //@synthesize dictionaryClosingTagData=_dictionaryClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * keyOpeningTagData;                     //@synthesize keyOpeningTagData=_keyOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * keyClosingTagData;                     //@synthesize keyClosingTagData=_keyClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * stringOpeningTagData;                  //@synthesize stringOpeningTagData=_stringOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * stringClosingTagData;                  //@synthesize stringClosingTagData=_stringClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * dataOpeningTagData;                    //@synthesize dataOpeningTagData=_dataOpeningTagData - In the implementation block
@property (nonatomic,readonly) NSData * dataClosingTagData;                    //@synthesize dataClosingTagData=_dataClosingTagData - In the implementation block
@property (nonatomic,readonly) NSData * boolTrueTagData;                       //@synthesize boolTrueTagData=_boolTrueTagData - In the implementation block
@property (nonatomic,readonly) NSData * boolFalseTagData;                      //@synthesize boolFalseTagData=_boolFalseTagData - In the implementation block
-(void)endDictionary;
-(id)init;
-(void)_addObject:(id)arg1 ;
-(void)_startArray;
-(NSMutableString *)tabPrefix;
-(id)initWithOutputFileHandle:(id)arg1 ;
-(NSMutableArray *)containerStack;
-(void)_writeDictionaryKey:(id)arg1 ;
-(NSMutableData *)outputBuffer;
-(void)_decrementTabPrefix;
-(NSData *)tabPrefixData;
-(NSData *)arrayClosingTagData;
-(void)_startDictionary;
-(NSData *)dictionaryClosingTagData;
-(void)_flushOutputBuffer;
-(NSFileHandle *)outputFileHandle;
-(void)_encodeString:(id)arg1 ;
-(void)_encodeNumber:(id)arg1 ;
-(void)_encodeData:(id)arg1 ;
-(NSData *)stringOpeningTagData;
-(void)_writeString:(id)arg1 ;
-(NSData *)stringClosingTagData;
-(NSData *)boolTrueTagData;
-(NSData *)boolFalseTagData;
-(NSData *)dataOpeningTagData;
-(NSData *)dataClosingTagData;
-(NSData *)arrayOpeningTagData;
-(void)_incrementTabPrefix;
-(NSData *)dictionaryOpeningTagData;
-(void)setTabPrefixData:(NSData *)arg1 ;
-(NSData *)keyOpeningTagData;
-(NSData *)keyClosingTagData;
-(void)startArray;
-(void)startArrayForKey:(id)arg1 ;
-(void)startDictionary;
-(void)startDictionaryForKey:(id)arg1 ;
-(void)setOutputFileHandle:(NSFileHandle *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setContainerStack:(NSMutableArray *)arg1 ;
-(void)setTabPrefix:(NSMutableString *)arg1 ;
-(void)close;
-(NSDateFormatter *)dateFormatter;
-(void)_encodeDate:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)endArray;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_writeData:(id)arg1 ;
@end

