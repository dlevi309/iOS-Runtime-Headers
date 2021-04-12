/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, MRTextEditingAttributes;

@interface MRTextEditingSession : NSObject <NSMutableCopying> {

	NSString* _text;
	BOOL _editing;
	MRTextEditingAttributes* _attributes;
	unsigned long long _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) MRTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(MRTextEditingAttributes *)attributes;
-(unsigned long long)uniqueIdentifier;
-(NSString *)text;
-(BOOL)isEditing;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)initWithText:(id)arg1 attributes:(id)arg2 ;
@end

