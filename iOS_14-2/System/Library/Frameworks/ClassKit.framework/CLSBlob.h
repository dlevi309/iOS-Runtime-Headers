/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSData, NSString;

@interface CLSBlob : CLSObject <CLSRelationable> {

	int _type;
	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(int)type;
-(id)initWithType:(int)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
@end

