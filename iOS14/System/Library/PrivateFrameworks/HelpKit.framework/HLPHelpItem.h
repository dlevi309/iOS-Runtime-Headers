/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface HLPHelpItem : NSObject <NSCopying> {

	NSString* _decodedName;
	HLPHelpItem* _parent;
	long long _serverType;
	long long _level;
	NSURL* _iconURL;
	NSString* _name;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) HLPHelpItem * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) long long serverType;                     //@synthesize serverType=_serverType - In the implementation block
@property (assign,nonatomic) long long level;                          //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * decodedName; 
-(void)setIconURL:(NSURL *)arg1 ;
-(HLPHelpItem *)parent;
-(id)debugDescription;
-(void)setParent:(HLPHelpItem *)arg1 ;
-(NSString *)name;
-(long long)level;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(NSString *)identifier;
-(void)setLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)serverType;
-(void)setServerType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3 ;
-(NSString *)decodedName;
@end

