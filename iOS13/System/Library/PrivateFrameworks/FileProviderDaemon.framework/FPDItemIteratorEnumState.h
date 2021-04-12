/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPXPCAutomaticErrorProxyFPXEnumerator;
@class FPItem, NSData;

@interface FPDItemIteratorEnumState : NSObject {

	FPItem* _parentItem;
	id<FPXPCAutomaticErrorProxy><FPXEnumerator> _enumerator;
	NSData* _nextPage;

}

@property (nonatomic,retain) FPItem * parentItem;                                                 //@synthesize parentItem=_parentItem - In the implementation block
@property (nonatomic,retain) id<FPXPCAutomaticErrorProxy><FPXEnumerator> enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,retain) NSData * nextPage;                                                   //@synthesize nextPage=_nextPage - In the implementation block
-(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)enumerator;
-(FPItem *)parentItem;
-(void)setParentItem:(FPItem *)arg1 ;
-(NSData *)nextPage;
-(void)setEnumerator:(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)arg1 ;
-(void)setNextPage:(NSData *)arg1 ;
@end

