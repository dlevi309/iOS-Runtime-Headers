/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)resultCount;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4 ;
-(void)_addResult:(unsigned long long)arg1 ;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(NSArray *)results;
-(NSString *)attribute;
-(id)value;
-(NSArray *)subgroups;
-(void)_zapResultArray;
@end

