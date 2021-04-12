/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setSettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)initWithChildKeyPath:(id)arg1 ;
-(NSString *)childKeyPath;
@end

