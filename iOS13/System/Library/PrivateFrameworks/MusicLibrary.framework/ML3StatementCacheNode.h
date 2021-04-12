/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(ML3StatementCacheNode *)next;
-(void)setNext:(ML3StatementCacheNode *)arg1 ;
-(id)initWithDictionaryKey:(id)arg1 ;
-(NSObject*<NSCopying>)dictionaryKey;
-(void)setDictionaryKey:(NSObject*<NSCopying>)arg1 ;
@end

