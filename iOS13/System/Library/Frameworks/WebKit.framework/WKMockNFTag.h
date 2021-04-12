/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NFTag.h>

@protocol NFTagA, NFTagB, NFTagF;
@class NSData, NSString;

@interface WKMockNFTag : NSObject <NFTag> {

	unsigned _type;
	RetainPtr<NSData>* _tagID;
	unsigned _technology;
	unsigned _ndefAvailability;
	NSData* _AppData;
	NSData* _UID;
	unsigned long long _ndefMessageSize;
	unsigned long long _ndefContainerSize;
	id<NFTagA> _tagA;
	id<NFTagB> _tagB;
	id<NFTagF> _tagF;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) unsigned technology;                               //@synthesize technology=_technology - In the implementation block
@property (nonatomic,copy,readonly) NSData * tagID; 
@property (nonatomic,copy,readonly) NSData * UID;                                 //@synthesize UID=_UID - In the implementation block
@property (nonatomic,readonly) unsigned ndefAvailability;                         //@synthesize ndefAvailability=_ndefAvailability - In the implementation block
@property (nonatomic,readonly) unsigned long long ndefMessageSize;                //@synthesize ndefMessageSize=_ndefMessageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long ndefContainerSize;              //@synthesize ndefContainerSize=_ndefContainerSize - In the implementation block
@property (nonatomic,copy,readonly) NSData * AppData;                             //@synthesize AppData=_AppData - In the implementation block
@property (nonatomic,readonly) id<NFTagA> tagA;                                   //@synthesize tagA=_tagA - In the implementation block
@property (nonatomic,readonly) id<NFTagB> tagB;                                   //@synthesize tagB=_tagB - In the implementation block
@property (nonatomic,readonly) id<NFTagF> tagF;                                   //@synthesize tagF=_tagF - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(NSData *)tagID;
-(id)initWithType:(unsigned)arg1 tagID:(id)arg2 ;
-(id)initWithNFTag:(id)arg1 ;
-(BOOL)isEqualToNFTag:(id)arg1 ;
-(unsigned)technology;
-(NSData *)UID;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(NSData *)AppData;
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;
@end

