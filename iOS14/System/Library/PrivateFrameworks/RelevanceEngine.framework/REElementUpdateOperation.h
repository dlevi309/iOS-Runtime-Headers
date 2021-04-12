/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject {

	REElement* _element;
	RESectionPath* _path;
	RESectionPath* _movedToPath;
	unsigned long long _type;

}

@property (nonatomic,readonly) REElement * element;                      //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) RESectionPath * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) RESectionPath * movedToPath;              //@synthesize movedToPath=_movedToPath - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
+(id)reloadElement:(id)arg1 atPath:(id)arg2 ;
+(id)insertElement:(id)arg1 atPath:(id)arg2 ;
+(id)removeElement:(id)arg1 atPath:(id)arg2 ;
+(id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
+(id)refreshElement:(id)arg1 atPath:(id)arg2 ;
-(REElement *)element;
-(RESectionPath *)path;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned long long)arg4 ;
-(RESectionPath *)movedToPath;
@end

