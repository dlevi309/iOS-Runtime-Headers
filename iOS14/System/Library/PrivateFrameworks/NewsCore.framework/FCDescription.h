/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSObject, NSString, NSMutableDictionary, NSMutableArray;

@interface FCDescription : NSObject {

	NSObject* _object;
	Class _class;
	void* _cfType;
	NSString* _header;
	NSMutableDictionary* _fields;
	NSMutableArray* _fieldOrder;
	unsigned long long _fieldNameWidth;
	BOOL _commaSeparated;

}
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
+(id)descriptionWithCFType:(void*)arg1 format:(id)arg2 ;
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 ;
+(id)descriptionWithObject:(id)arg1 ;
+(id)descriptionWithObject:(id)arg1 format:(id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3 ;
-(void)addField:(id)arg1 value:(id)arg2 ;
-(id)initWithObject:(id)arg1 format:(id)arg2 ;
-(id)initWithCFType:(void*)arg1 header:(id)arg2 ;
-(void)addField:(id)arg1 format:(id)arg2 ;
-(void)addFieldWithFormat:(id)arg1 ;
-(id)p_header;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(char*)arg4 ;
-(void)addFieldValue:(id)arg1 ;
-(void)addSuperDescription;
-(id)descriptionString;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
-(void)setFieldOptionCommaSeparated;
-(void)addField:(id)arg1 target:(id)arg2 ;
-(void)addField:(id)arg1 object:(id)arg2 ;
@end

