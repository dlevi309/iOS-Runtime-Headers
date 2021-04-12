/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _stringProperties;

}

@property (nonatomic,retain) NSSet * stringProperties;                   //@synthesize stringProperties=_stringProperties - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(id)initWithStringProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(BOOL)supportsPropertySearch;
-(BOOL)supportsWellKnownType:(int)arg1 ;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setStringProperties:(NSSet *)arg1 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(BOOL)isEqualToPropertySet:(id)arg1 ;
@end

