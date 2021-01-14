/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isText,nonatomic,readonly) BOOL text; 
@property (getter=isIcon,nonatomic,readonly) BOOL icon; 
@property (getter=isProgress,nonatomic,readonly) BOOL progress; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
+(BOOL)supportsSecureCoding;
+(id)textMetadataWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)placeholderMetadata;
+(id)iconMetadataWithImageName:(id)arg1 animationName:(id)arg2 ;
+(id)emptyMetadata;
+(id)redownloadMetadata;
+(id)indeterminateProgressMetadata;
+(id)progressMetadataWithValue:(double)arg1 ;
-(BOOL)isPlaceholder;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isText;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isIcon;
-(id)_init;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isProgress;
@end

