/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSDecoder : NSObject <CSCoderData> {

	NSData* _data;
	id _backingStore;
	const CFAllocatorRef _contentDeallocator;
	SCD_Struct_CS2 _obj;

}

@property (nonatomic,readonly) SCD_Struct_CS3 obj;                                   //@synthesize obj=_obj - In the implementation block
@property (nonatomic,readonly) const CFAllocatorRef contentDeallocator;              //@synthesize contentDeallocator=_contentDeallocator - In the implementation block
@property (nonatomic,readonly) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) id backingStore;                                        //@synthesize backingStore=_backingStore - In the implementation block
-(id)backingStore;
-(id)debugDescription;
-(const CFAllocatorRef)contentDeallocator;
-(id)initWithData:(id)arg1 ;
-(SCD_Struct_CS3)obj;
-(id)decode;
-(id)decodeObject:(SCD_Struct_CS3)arg1 ;
-(id)description;
-(id)decodeObjectNoCopy:(SCD_Struct_CS3)arg1 ;
-(NSData *)data;
-(void)setBackingStore:(id)arg1 ;
-(id)initWithData:(id)arg1 obj:(SCD_Struct_CS3)arg2 ;
-(void)dealloc;
@end

