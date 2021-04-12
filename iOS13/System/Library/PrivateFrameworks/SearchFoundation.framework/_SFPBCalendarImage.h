/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCalendarImage.h>
@class _SFPBDate, NSData;


@protocol _SFPBCalendarImage <NSObject>
@property (nonatomic,retain) _SFPBDate * date; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBDate *)date;
-(id)initWithDictionary:(id)arg1;
-(void)setDate:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBDate, NSData, NSString;

@interface _SFPBCalendarImage : PBCodable <_SFPBCalendarImage, NSSecureCoding> {

	_SFPBDate* _date;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_SFPBDate *)date;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setDate:(_SFPBDate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

