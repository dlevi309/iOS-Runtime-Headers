/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
*/


#import <ContentIndex/ContentIndex-Structs.h>
@class NSString;

@interface CXIndex : NSObject {

	int _cancel;
	NSString* _path;
	SIRef _skRef;

}

@property (nonatomic,readonly) SIRef skRef;                  //@synthesize skRef=_skRef - In the implementation block
@property (assign,nonatomic) int cancel;                     //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(void)initialize;
-(void)dealloc;
-(int)cancel;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)commit;
-(void)close:(unsigned)arg1 ;
-(void)setCancel:(int)arg1 ;
-(BOOL)flush:(unsigned)arg1 ;
-(SIRef)skRef;
-(BOOL)open:(unsigned)arg1 recoveredTransactionId:(unsigned*)arg2 ;
-(BOOL)create:(unsigned)arg1 ;
-(int*)cancelPtr;
-(_SI*)siIndexPtr;
-(BOOL)compact:(unsigned)arg1 ;
-(BOOL)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned*)arg4 ;
-(void)deleteDocumentByName:(id)arg1 ;
-(void)deleteDocument:(unsigned)arg1 ;
-(BOOL)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned)arg3 transaction:(unsigned*)arg4 ;
-(BOOL)addContent:(id)arg1 transaction:(unsigned*)arg2 ;
@end

