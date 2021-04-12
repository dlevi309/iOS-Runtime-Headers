/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface SHMediaItem : NSObject <NSSecureCoding> {

	NSDictionary* _resultDictionary;

}

@property (nonatomic,readonly) NSDictionary * resultDictionary;              //@synthesize resultDictionary=_resultDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSDictionary *)resultDictionary;
-(id)initWithResultDictionary:(id)arg1 ;
@end

