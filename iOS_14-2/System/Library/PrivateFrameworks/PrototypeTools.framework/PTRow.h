/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSHashTable, NSString, UIImage, NSPredicate, PTRowAction, PTSection, PTSettings;

@interface PTRow : NSObject <PTSettingsKeyPathObserver, NSCopying, NSSecureCoding> {

	NSHashTable* _observers;
	BOOL _isEncodable;
	NSString* _valueKeyPath;
	NSString* _staticTitle;
	NSString* _titleKeyPath;
	UIImage* _staticImage;
	NSString* _imageKeyPath;
	NSPredicate* _condition;
	PTRowAction* _action;
	/*^block*/id _valueValidatator;
	/*^block*/id _valueFormatter;
	/*^block*/id _valueGetter;
	/*^block*/id _valueSetter;
	/*^block*/id _externalCondition;
	/*^block*/id _unregisterBlock;
	PTSection* _section;
	PTSettings* _settings;

}

@property (nonatomic,copy) id valueGetter;                            //@synthesize valueGetter=_valueGetter - In the implementation block
@property (nonatomic,copy) id valueSetter;                            //@synthesize valueSetter=_valueSetter - In the implementation block
@property (nonatomic,copy) id externalCondition;                      //@synthesize externalCondition=_externalCondition - In the implementation block
@property (nonatomic,copy) id unregisterBlock;                        //@synthesize unregisterBlock=_unregisterBlock - In the implementation block
@property (assign,nonatomic,__weak) PTSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isEncodable;                        //@synthesize isEncodable=_isEncodable - In the implementation block
@property (nonatomic,retain) PTSettings * settings;                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) NSString * valueKeyPath;                   //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (nonatomic,copy) NSString * staticTitle;                    //@synthesize staticTitle=_staticTitle - In the implementation block
@property (nonatomic,copy) NSString * titleKeyPath;                   //@synthesize titleKeyPath=_titleKeyPath - In the implementation block
@property (nonatomic,retain) UIImage * staticImage;                   //@synthesize staticImage=_staticImage - In the implementation block
@property (nonatomic,copy) NSString * imageKeyPath;                   //@synthesize imageKeyPath=_imageKeyPath - In the implementation block
@property (nonatomic,copy) NSPredicate * condition;                   //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) PTRowAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id valueValidatator;                       //@synthesize valueValidatator=_valueValidatator - In the implementation block
@property (nonatomic,copy) id valueFormatter;                         //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pu_rowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)pu_rowWithTitle:(id)arg1 output:(/*^block*/id)arg2 ;
+(id)pu_rowWithTitle:(id)arg1 settingsProvider:(/*^block*/id)arg2 ;
+(id)pu_rowWithTitle:(id)arg1 settingsProvider:(/*^block*/id)arg2 isTransient:(BOOL)arg3 ;
+(id)pu_rowWithTitle:(id)arg1 asynchronousOutputProducer:(/*^block*/id)arg2 ;
+(id)pu_rowWithTitle:(id)arg1 settings:(id)arg2 ;
+(id)pu_rowWithTitle:(id)arg1 settings:(id)arg2 condition:(id)arg3 ;
+(id)px_rowWithTitle:(id)arg1 asynchronousOutputProducer:(/*^block*/id)arg2 ;
+(id)px_rowWithTitle:(id)arg1 output:(/*^block*/id)arg2 ;
+(id)px_rowWithTitle:(id)arg1 continuousOutputProducer:(/*^block*/id)arg2 ;
+(id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 condition:(id)arg3 ;
+(id)px_rowWithTitle:(id)arg1 postDismissalAction:(/*^block*/id)arg2 ;
+(id)px_rowWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)row;
+(id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 ;
+(id)rowWithTitle:(id)arg1 valueGetter:(/*^block*/id)arg2 valueSetter:(/*^block*/id)arg3 ;
-(id)pu_increment:(double)arg1 ;
-(id)px_increment:(double)arg1 ;
-(id)px_conditionFormat:(id)arg1 possibleValues:(id)arg2 ;
-(Class)tableViewCellClass;
-(id)defaultUIAction;
-(id)is_increment:(double)arg1 ;
-(void)setCondition:(NSPredicate *)arg1 ;
-(void)setSection:(PTSection *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(UIImage *)staticImage;
-(void)setStaticImage:(UIImage *)arg1 ;
-(id)valueFormatter:(/*^block*/id)arg1 ;
-(id)action:(id)arg1 ;
-(id)init;
-(PTSection *)section;
-(void)encodeWithCoder:(id)arg1 ;
-(id)condition:(id)arg1 ;
-(id)unregisterBlock;
-(PTRowAction *)action;
-(void)setAction:(PTRowAction *)arg1 ;
-(void)setUnregisterBlock:(id)arg1 ;
-(id)image;
-(void)setSettings:(PTSettings *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setImageKeyPath:(NSString *)arg1 ;
-(void)setTitleKeyPath:(NSString *)arg1 ;
-(id)titleKeyPath:(id)arg1 ;
-(id)valueGetter;
-(PTSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setValueValidatator:(id)arg1 ;
-(id)valueValidator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSPredicate *)condition;
-(id)initWithCoder:(id)arg1 ;
-(id)_defaultAction;
-(void)_sendValueChanged;
-(id)conditionFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(id)title;
-(void)setStaticTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)valueFormatter;
-(void)setValueFormatter:(id)arg1 ;
-(id)staticTitle:(id)arg1 ;
-(id)valueKeyPath:(id)arg1 ;
-(void)setValueGetter:(id)arg1 ;
-(void)setValueSetter:(id)arg1 ;
-(void)setValueKeyPath:(NSString *)arg1 ;
-(id)_validatedValue:(id)arg1 ;
-(void)_sendRowDidReload;
-(void)_sendTitleChanged;
-(void)_sendImageChanged;
-(BOOL)isEncodable;
-(id)staticImage:(id)arg1 ;
-(id)imageKeyPath:(id)arg1 ;
-(id)childSettingsForKeyPath:(id)arg1 ;
-(void)reloadRow;
-(NSString *)valueKeyPath;
-(NSString *)staticTitle;
-(NSString *)titleKeyPath;
-(NSString *)imageKeyPath;
-(id)valueValidatator;
-(id)valueSetter;
-(id)externalCondition;
-(void)setExternalCondition:(id)arg1 ;
-(void)setIsEncodable:(BOOL)arg1 ;
@end

