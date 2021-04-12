/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@class PTSettings, NSString;

@interface PTDrillDownRow : PTSRow {

	PTSettings* _childSettings;
	NSString* _childKeyPath;

}

@property (nonatomic,readonly) NSString * childKeyPath;              //@synthesize childKeyPath=_childKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2 ;
-(Class)tableViewCellClass;
-(id)defaultUIAction;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithChildKeyPath:(id)arg1 ;
-(NSString *)childKeyPath;
@end

