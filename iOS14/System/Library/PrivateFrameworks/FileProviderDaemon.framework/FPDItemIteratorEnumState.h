/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FPItem *)parentItem;
-(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)enumerator;
-(NSData *)nextPage;
-(void)setParentItem:(FPItem *)arg1 ;
-(void)setEnumerator:(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)arg1 ;
-(void)setNextPage:(NSData *)arg1 ;
@end

