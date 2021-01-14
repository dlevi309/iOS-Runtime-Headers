/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString;

@interface _PASArgOption : NSObject {

	int _longOptionFlag;
	BOOL _required;
	NSString* _name;
	NSString* _shortName;
	NSString* _helpDescription;
	NSString* _argMetavar;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                    //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * helpDescription;              //@synthesize helpDescription=_helpDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * argMetavar;                   //@synthesize argMetavar=_argMetavar - In the implementation block
@property (nonatomic,readonly) BOOL required;                                //@synthesize required=_required - In the implementation block
+(id)optionWithName:(id)arg1 shortName:(id)arg2 help:(id)arg3 ;
+(id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 ;
+(id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(BOOL)arg5 ;
-(NSString *)shortName;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(BOOL)arg5 ;
-(NSString *)helpDescription;
-(NSString *)argMetavar;
-(BOOL)required;
@end

