/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)count;
-(id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4 ;
-(NSString *)attribute;
-(id)value;
@end

