/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSObject, NSString, NSMutableDictionary, NSMutableArray;

@interface BUDescription : NSObject {

	NSObject* _object;
	Class _class;
	void* _cfType;
	NSString* _header;
	NSMutableDictionary* _fields;
	NSMutableArray* _fieldOrder;
	unsigned long long _fieldNameWidth;
	BOOL _commaSeparated;

}

@property (nonatomic,copy,readonly) NSString * descriptionString; 
+(id)descriptionWithObject:(id)arg1 ;
+(id)descriptionWithObject:(id)arg1 format:(id)arg2 ;
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 ;
+(id)descriptionWithCFType:(void*)arg1 format:(id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(NSString *)descriptionString;
-(void)addField:(id)arg1 value:(id)arg2 ;
-(void)addField:(id)arg1 format:(id)arg2 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(char*)arg4 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
-(id)initWithCFType:(void*)arg1 header:(id)arg2 ;
-(void)addFieldWithFormat:(id)arg1 ;
-(void)addFieldValue:(id)arg1 ;
-(id)p_header;
-(id)initWithObject:(id)arg1 format:(id)arg2 ;
-(void)addSuperDescription;
-(void)setFieldOptionCommaSeparated;
@end

