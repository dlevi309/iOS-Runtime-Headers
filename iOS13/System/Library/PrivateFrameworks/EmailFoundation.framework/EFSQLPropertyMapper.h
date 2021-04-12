/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject {

	NSMutableDictionary* _lookupValues;

}

@property (nonatomic,retain) NSMutableDictionary * lookupValues;              //@synthesize lookupValues=_lookupValues - In the implementation block
+(id)emptyPropertyMapper;
-(id)init;
-(id)merge:(id)arg1 ;
-(id)columnNameForLookupKey:(id)arg1 value:(id)arg2 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5 ;
-(id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(BOOL)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(void)setLookupValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupValues;
-(id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2 ;
-(void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 ;
-(id)_qualifiedColumnExpressionForColumn:(id)arg1 availableTables:(id)arg2 ;
-(void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)columnForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)columnForLookupKey:(id)arg1 value:(id)arg2 ;
-(id)columnNameForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnNameForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3 ;
@end

