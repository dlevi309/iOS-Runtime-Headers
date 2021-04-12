/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CHStrokeProviderVersion.h>

@class NSMutableDictionary, NSString;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion> {

	NSMutableDictionary* _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(id)shortDescription;
-(unsigned long long)compareTo:(id)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(id)allUUIDs;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 ;
-(long long)compareClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(void)unionClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
@end

