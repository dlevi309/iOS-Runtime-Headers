/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class _REInterfaceKey, NSArray, NSHashTable, NSMapTable;

@interface _REInterfaceValue : NSObject {

	_REInterfaceKey* _type;
	NSArray* _conformedInterfaces;
	NSHashTable* _conformedProtocols;
	NSMapTable* _properties;
	NSMapTable* _methods;

}

@property (nonatomic,retain) _REInterfaceKey * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * conformedInterfaces;                 //@synthesize conformedInterfaces=_conformedInterfaces - In the implementation block
@property (nonatomic,retain) NSHashTable * conformedProtocols;              //@synthesize conformedProtocols=_conformedProtocols - In the implementation block
@property (nonatomic,retain) NSMapTable * properties;                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMapTable * methods;                          //@synthesize methods=_methods - In the implementation block
-(NSMapTable *)properties;
-(NSMapTable *)methods;
-(void)setType:(_REInterfaceKey *)arg1 ;
-(_REInterfaceKey *)type;
-(void)setProperties:(NSMapTable *)arg1 ;
-(void)setMethods:(NSMapTable *)arg1 ;
-(NSArray *)conformedInterfaces;
-(void)setConformedInterfaces:(NSArray *)arg1 ;
-(NSHashTable *)conformedProtocols;
-(void)setConformedProtocols:(NSHashTable *)arg1 ;
@end

