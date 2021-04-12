/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {

	NSSet* _propertiesToFind;
	NSString* _expandedName;
	NSString* _expandedNameSpace;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                  //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) NSString * expandedName;                   //@synthesize expandedName=_expandedName - In the implementation block
@property (nonatomic,retain) NSString * expandedNameSpace;              //@synthesize expandedNameSpace=_expandedNameSpace - In the implementation block
-(NSSet *)propertiesToFind;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSString *)expandedName;
-(void)setExpandedName:(NSString *)arg1 ;
-(NSString *)expandedNameSpace;
-(void)setExpandedNameSpace:(NSString *)arg1 ;
@end

