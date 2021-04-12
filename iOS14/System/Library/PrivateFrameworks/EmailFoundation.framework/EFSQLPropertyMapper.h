/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject {

	NSMutableDictionary* _lookupValues;

}

@property (nonatomic,retain) NSMutableDictionary * lookupValues;              //@synthesize lookupValues=_lookupValues - In the implementation block
+(id)emptyPropertyMapper;
-(id)merge:(id)arg1 ;
-(id)_qualifiedColumnExpressionsForColumn:(id)arg1 availableTables:(id)arg2 replaceNULL:(BOOL)arg3 ;
-(id)columnForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)init;
-(void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(NSMutableDictionary *)lookupValues;
-(id)qualifiedColumnExpressionsForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)columnNameForClass:(Class)arg1 property:(SEL)arg2 ;
-(BOOL)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(id)columnNameForLookupKey:(id)arg1 value:(id)arg2 ;
-(id)columnNameForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3 ;
-(id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3 ;
-(id)qualifiedColumnNamesForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5 ;
-(id)columnForLookupKey:(id)arg1 value:(id)arg2 ;
-(id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2 ;
-(void)_registerQualifiedColumns:(id)arg1 lookupKeys:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4 ;
-(void)setLookupValues:(NSMutableDictionary *)arg1 ;
-(void)registerColumnNames:(id)arg1 table:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 ;
@end

