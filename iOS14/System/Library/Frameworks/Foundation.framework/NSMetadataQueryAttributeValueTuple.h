/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject {

	id _attr;
	id _value;
	unsigned long long _count;
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (readonly) unsigned long long count; 
-(NSString *)attribute;
-(unsigned long long)count;
-(id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4 ;
-(id)value;
-(void)dealloc;
@end

