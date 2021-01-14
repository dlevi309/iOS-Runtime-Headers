/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol NSCopying;
@class NSObject;

@interface ML3StatementCacheNode : NSObject {

	NSObject*<NSCopying> _dictionaryKey;
	ML3StatementCacheNode* _next;

}

@property (nonatomic,copy) NSObject*<NSCopying> dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) ML3StatementCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(ML3StatementCacheNode *)next;
-(id)initWithDictionaryKey:(id)arg1 ;
-(id)description;
-(void)setDictionaryKey:(NSObject*<NSCopying>)arg1 ;
-(void)setNext:(ML3StatementCacheNode *)arg1 ;
-(NSObject*<NSCopying>)dictionaryKey;
@end

