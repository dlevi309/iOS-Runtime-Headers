/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTNetwork;

@interface CTNetworkSelectionInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _selectionState;
	unsigned long long _selectionMode;
	CTNetwork* _selection;

}

@property (assign,nonatomic) unsigned long long selectionState;              //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) unsigned long long selectionMode;               //@synthesize selectionMode=_selectionMode - In the implementation block
@property (nonatomic,retain) CTNetwork * selection;                          //@synthesize selection=_selection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTNetwork *)selection;
-(unsigned long long)selectionState;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(void)setSelection:(CTNetwork *)arg1 ;
-(unsigned long long)selectionMode;
-(void)setSelectionMode:(unsigned long long)arg1 ;
@end

