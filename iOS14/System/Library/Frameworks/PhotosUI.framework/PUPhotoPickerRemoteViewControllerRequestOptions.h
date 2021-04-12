/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary, NSArray;

@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject <NSSecureCoding> {

	NSUUID* _requestedIdentifier;
	NSString* _requestedClassName;
	NSDictionary* _photoPickerProperties;

}

@property (nonatomic,retain) NSUUID * requestedIdentifier;                             //@synthesize requestedIdentifier=_requestedIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestedClassName;                              //@synthesize requestedClassName=_requestedClassName - In the implementation block
@property (nonatomic,copy) NSDictionary * photoPickerProperties;                       //@synthesize photoPickerProperties=_photoPickerProperties - In the implementation block
@property (nonatomic,readonly) long long modalPresentationStyle; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) unsigned long long savingOptions; 
@property (nonatomic,readonly) NSArray * mediaTypes; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) unsigned long long multipleSelectionLimit; 
@property (nonatomic,readonly) BOOL requiresPickingConfirmation; 
@property (nonatomic,readonly) BOOL showsFileSizePicker; 
@property (nonatomic,readonly) BOOL showsPrompt; 
@property (nonatomic,readonly) BOOL convertAutoloopsToGIF; 
+(BOOL)supportsSecureCoding;
-(BOOL)allowsMultipleSelection;
-(long long)sourceType;
-(BOOL)showsFileSizePicker;
-(BOOL)requiresPickingConfirmation;
-(id)initWithRequestedClassName:(id)arg1 photoPickerProperties:(id)arg2 ;
-(unsigned long long)savingOptions;
-(long long)modalPresentationStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)convertAutoloopsToGIF;
-(NSDictionary *)photoPickerProperties;
-(id)initWithRequestedIdentifier:(id)arg1 photoPickerProperties:(id)arg2 ;
-(NSString *)requestedClassName;
-(NSUUID *)requestedIdentifier;
-(void)setRequestedIdentifier:(NSUUID *)arg1 ;
-(void)setRequestedClassName:(NSString *)arg1 ;
-(void)setPhotoPickerProperties:(NSDictionary *)arg1 ;
-(id)description;
-(BOOL)showsPrompt;
-(NSArray *)mediaTypes;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)multipleSelectionLimit;
@end

