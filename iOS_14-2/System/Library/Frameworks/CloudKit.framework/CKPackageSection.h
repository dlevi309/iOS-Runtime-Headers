/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSData;

@interface CKPackageSection : NSObject {

	long long _index;
	NSData* _signature;
	unsigned long long _size;

}

@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSData * signature;              //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
-(long long)index;
-(NSData *)signature;
-(unsigned long long)size;
-(id)CKPropertiesDescription;
-(void)setSize:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3 ;
@end

