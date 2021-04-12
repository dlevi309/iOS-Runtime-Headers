/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSStoreMapNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDictionaryMapNode : NSStoreMapNode <NSSecureCoding> {

	id* _attributes;
	id _attributesAsEncoded;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)_doAttributeDecoding;
-(id)initWithValues:(id*)arg1 objectID:(id)arg2 ;
-(const id*)attributeValues;
@end

