/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {

	id _private[9];
	unsigned long long _private2[1];
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (copy,readonly) NSArray * subgroups; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
-(NSArray *)results;
-(unsigned long long)resultCount;
-(NSArray *)subgroups;
-(NSString *)attribute;
-(void)_addResult:(unsigned long long)arg1 ;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4 ;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(void)_zapResultArray;
-(id)value;
-(void)dealloc;
@end

